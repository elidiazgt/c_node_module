#include <node.h>

void RegisterModule(v8::Handle<v8::Object> target) {

    //aqui puedes agregar propiedades al modulo
    //cuando se llama desde node se ejecutan

}

//Registra el modulo en node.
//NombredeModulo es el mismo que en el archivo binding.gyp

NODE_MODULE(nombre_modulo, RegisterModule);