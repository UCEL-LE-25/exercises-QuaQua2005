# Título del Proyecto
    Este programa es un Sistema Contable Simplificado para Gestión de Clientes y Comprobantes.

# Resumen Ejecutivo 
    Este sistema contable desarrollado en C permite la gestión básica de clientes y comprobantes (facturas, notas de crédito, notas de débito y recibos). Incluye un módulo de autenticación de usuarios con roles diferenciados (administrador/usuario) y persistencia de datos mediante archivos de texto plano

# Requisitos Funcionales
    Entidades principales a gestionar:
        - Clientes: Información de contacto y fiscal de la entidad a la que se le emiten comprobantes.
        - Comprobantes: Registros financieros asociados a los clientes.
        - Usuarios: Credenciales y roles para el acceso al sistema.
    Operaciones ABM:
        - Clientes:
            # Alta: Permite agregar nuevos clientes con nombre, CUIT, dirección y email.
            # Listado: Muestra todos los clientes registrados con sus detalles.
            # Modificación: Permite actualizar nombre, dirección y email de un cliente existente buscando por CUIT.   
            # Baja: Elimina un cliente por CUIT, con validación para evitar la eliminación si tiene comprobantes asociados.   
        - Comprobantes:
            # Alta: Permite registrar nuevos comprobantes especificando tipo, número, fecha de emisión, CUIT del cliente asociado y monto total. Requiere que el CUIT del cliente exista previamente.
            # Listado: Muestra todos los comprobantes registrados con sus detalles.
            # Modificación: Permite actualizar el tipo, la fecha y el total de un comprobante existente buscando por número.
            # Baja: Elimina un comprobante por su número.   
        - Usuarios (solo para administradores):
            # Alta: Permite agregar nuevos usuarios con nombre, contraseña y rol (administrador/usuario).   
            # Listado: Muestra todos los usuarios registrados.   
            # Modificación: Permite actualizar nombre, contraseña y rol de un usuario existente.   
            # Baja: Elimina un usuario por nombre de usuario.

# Módulos adicionales
    - Autenticación: Sistema de inicio de sesión con usuarios y contraseñas. Permite diferenciar roles (administrador y usuario regular), donde solo el administrador tiene acceso a la gestión de usuarios.   
    - Búsqueda:
        # Buscar clientes por CUIT.
        # Buscar comprobantes por número.
        # Buscar comprobantes por CUIT de cliente.
    - Reportes: Listado de clientes y listado de comprobantes.

# Requisitos No Funcionales
    - Formato de los registros en archivo:
        # Clientes: Los registros se almacenan en el archivo clients.txt con los campos separados por el carácter |. El formato es nombre|cuit|direccion|email\n
        # Comprobantes: Los registros se almacenan en el archivo receipts.txt con los campos separados por |. El formato es tipo|numero|dd/mm/aaaa|total|cuitCliente\n.
        # Usuarios: Los registros se almacenan en el archivo users.txt con los campos separados por espacios. El formato es userName userPassword isAdmin\n.
    - Criterios de manejo de errores y validación de datos:
        # Manejo de archivos: Se valida la apertura de los archivos (fopen) para carga y guardado, devolviendo 0 si hay un error. [cite_start]Si users.txt no existe o está vacío, se crea un usuario "admin" por defecto.   
        # Validación de entrada de usuario:
            * Validación de entrada numérica para CUIT, número de comprobante, total y opciones de menú, con mensajes de error y limpieza del buffer de entrada.
            * Validación de fechas en comprobantes.
            * Validación de existencia del CUIT del cliente al agregar un comprobante.
        # Validación de operaciones:
            * No se permite agregar más clientes/comprobantes si se alcanza el MAX_CLIENTS/MAX_RECEIPTS.
            * No se permite eliminar un cliente si tiene comprobantes asociados.
            * Mensajes de "no encontrado" para búsquedas o modificaciones de entidades que no existen.
# Diseño de Archivos 
    - Nombre(s) de archivo(s) y ruta(s) de almacenamiento:    
        # clients.txt: Almacena la información de los clientes. Se espera que esté en el mismo directorio que el ejecutable.
        # receipts.txt: Almacena la información de los comprobantes. Se espera que esté en el mismo directorio que el ejecutable.
        # users.txt: Almacena la información de los usuarios del sistema. Se espera que esté en el mismo directorio que el ejecutable.
    - Formato y tamaño de cada registro:    
        # Clientes:
            * name: Cadena de hasta 49 caracteres.
            * cuit: Entero.
            * adress: Cadena de hasta 99 caracteres.
            * email: Cadena de hasta 49 caracteres.
            * Ejemplo de registro: Nombre Cliente|123456789|Calle Falsa 123|cliente@email.com\n
        # Comprobantes:
            * type: Cadena de hasta 19 caracteres (ej. Factura, Recibo).
            * number: Entero.
            * issueDate: Estructura Date (day, month, year).
            * total: Número flotante.
            * cuitClient: Entero (CUIT del cliente asociado).
            * Ejemplo de registro: Factura|12345|01/01/2023|1500.50|123456789\n
        # Usuarios:
            * userName: Cadena de hasta 49 caracteres.
            * userPassword: Cadena de hasta 49 caracteres.
            * isAdmin: Entero (1 para administrador, 0 para usuario).
            * Ejemplo de registro: admin admin123 1\n
# Estructura de Código 
    El proyecto se organiza en los siguientes módulos (.c/.h):
    - main.c: Contiene la función main que inicializa el programa, carga los datos, maneja el flujo principal del menú y guarda los datos al salir. Incluye la función de inicio de sesión y el menú principal del sistema.
    - users.h / users.c:
        # users.h: Define la estructura User y prototipos de funciones para la gestión de usuarios.
        # users.c: Implementa funciones para cargar, guardar, autenticar usuarios, listar, agregar, eliminar y modificar usuarios, así como el menú específico para la gestión de usuarios (solo accesible por administradores).
    - clients.h / clients.c:
        # clients.h: Define la estructura Client y prototipos de funciones para la gestión de clientes.
        # clients.c: Implementa funciones para cargar, guardar, listar, agregar, modificar y eliminar clientes, buscar clientes por CUIT, y un menú para la gestión de clientes. También incluye la función hasAssociatedReceipts para validar si un cliente tiene comprobantes antes de ser eliminado.
    - receipts.h / receipts.c:
        # receipts.h: Define la estructura Receipt y prototipos de funciones para la gestión de comprobantes, incluyendo la estructura Date.
        # receipts.c: Implementa funciones para cargar, guardar, listar, agregar, modificar y eliminar comprobantes, buscar por número o por CUIT de cliente, y un menú para la gestión de comprobantes. Incluye validaciones para fechas y la existencia del cliente asociado.
    - dataTypes.h: Define las estructuras de datos (User, Date, Client, Receipt) y constantes (MAX_USERS, MAX_CLIENTS, MAX_RECEIPTS) utilizadas en todo el programa.
    - utils.h / utils.c: (Asumiendo que cleanBuffer() reside aquí, aunque utils.c no fue proporcionado)
        # utils.h: Prototipos de funciones de utilidad, como cleanBuffer().
        # utils.c: Implementación de funciones auxiliares, como la limpieza del buffer de entrada.
# Plan de Pruebas 
    Se proponen los siguientes casos de prueba para cada operación ABM y escenarios de error:
    - Gestión de Clientes:
        # Alta:
            * Agregar un cliente con todos los datos válidos.
            * Intentar agregar un cliente cuando el arreglo de clientes está lleno.
            * Probar nombres, direcciones o emails con caracteres especiales o espacios.
        # Listado:
            * Verificar que se muestren todos los clientes agregados.
            * Probar con lista vacía.
        # Modificación:
            * Modificar todos los campos de un cliente existente.
            * Modificar solo algunos campos (dejando Enter para los demás).
            * Intentar modificar un cliente con un CUIT que no existe.
        # Baja:
            * Eliminar un cliente existente sin comprobantes asociados.
            * Intentar eliminar un cliente que no existe.
            * Intentar eliminar un cliente que sí tiene comprobantes asociados, esperando el mensaje de error y que no se elimine.
            * Cancelar la operación de eliminación cuando se solicita confirmación.
        # Búsqueda por CUIT:
            * Buscar un cliente por un CUIT existente.
            * Buscar un cliente por un CUIT que no existe.
            * Ingresar un CUIT no numérico.
    - Gestión de Comprobantes:    
        # Alta:
            *Agregar un comprobante con todos los datos válidos y un CUIT de cliente existente.
            * Intentar agregar un comprobante con un CUIT de cliente que no existe.
            * Intentar agregar un comprobante con fecha inválida (mes > 12, día > 31, año fuera de rango).
            * Intentar agregar un comprobante con total negativo o cero.
            * Intentar agregar un comprobante cuando el arreglo está lleno.
        # Listado:
            * Verificar que se muestren todos los comprobantes agregados.
            * Probar con lista vacía.
        # Modificación:
            * Modificar todos los campos de un comprobante existente.
            * Modificar solo algunos campos (dejando Enter).
            * Intentar modificar un comprobante con un número que no existe.
            * Intentar ingresar una fecha inválida durante la modificación.
        # Baja:
            * Eliminar un comprobante existente.
            * Intentar eliminar un comprobante que no existe.
            * Cancelar la operación de eliminación.
        # Búsqueda por Número:
            * Buscar un comprobante por un número existente.
            * Buscar un comprobante por un número que no existe.
        # Búsqueda por Cliente (CUIT):
            * Buscar comprobantes asociados a un CUIT de cliente que tiene varios comprobantes.
            * Buscar comprobantes asociados a un CUIT de cliente que tiene un solo comprobante.
            * Buscar comprobantes asociados a un CUIT de cliente que no tiene comprobantes.
            * Buscar comprobantes para un CUIT de cliente que no existe.
    - Gestión de Usuarios (solo administrador):    
        # Alta:
            * Agregar un usuario normal.
            * Agregar un usuario administrador.
            * Intentar agregar un usuario cuando el arreglo está lleno.
        # Listado:
            * Verificar que se muestren todos los usuarios.
        # Modificación:
            * Modificar el nombre, contraseña y rol de un usuario existente.
            * Cambiar el rol de un usuario de normal a administrador y viceversa.
            * Intentar modificar un usuario que no existe.
        # Baja:
            * Eliminar un usuario existente.
            * Intentar eliminar un usuario que no existe.
            * Cancelar la operación de eliminación.
    - Escenarios de error específicos:    
        # Archivos no encontrados/vacíos:
            * Ejecutar el programa sin users.txt, clients.txt o receipts.txt para verificar que se creen (y en el caso de users.txt, que se inicialice con el usuario "admin").
            * Verificar el comportamiento si los archivos existen pero están vacíos.
        # Formato inválido de datos en archivo: 
            * Modificar un registro en clients.txt para que le falte un campo o tenga un delimitador incorrecto, y verificar cómo lo maneja loadClients.
            * Hacer lo mismo para receipts.txt y users.txt.
        # Entrada de datos duplicados:
            * Intentar agregar dos clientes con el mismo CUIT para ver si se sobreescribe o se agrega como un nuevo registro (actualmente se agregarán como nuevos registros duplicados).
            * Intentar agregar dos comprobantes con el mismo número.