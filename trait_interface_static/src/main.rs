use std::any::type_name;

fn type_of<T>(_: &T) -> &'static str {
    type_name::<T>()
}

pub trait Handle {
    fn handle(&self);
}

#[derive(Debug)]
struct BasicHandler {}

impl Handle for BasicHandler {
    fn handle(&self) {
        println!("BasicHandler::handle");

    }
}

#[derive(Debug)]
struct AdvancedHandler {}

impl Handle for AdvancedHandler {
     fn handle(&self) {
        println!("AdvancedHandler::handle");
    }
}

struct ManagerDynamic<'a> {
    handler: &'a dyn Handle,
}

impl<'a> ManagerDynamic<'a> {
    fn do_something(&self) {
        println!("ManagerDynamic::do_something()");
        self.handler.handle();
    }
}

struct ManagerStatic<'a, Handle> {
    handler: &'a Handle,
}

impl<'a,T: Handle> ManagerStatic<'a, T> {
    fn do_something(&self) {
        println!("ManagerStatic::do_something()");
        self.handler.handle();
    }
}

fn main() {
    let basic_handler = BasicHandler {};
    let advanced_handler = AdvancedHandler {};

    let basic_manager = ManagerDynamic {
        handler: &basic_handler,
    };
    basic_manager.do_something();
    println!(" ");

    let advanced_manager = ManagerDynamic {
        handler: &advanced_handler,
    };
    advanced_manager.do_something();
    println!(" ");

    let static_basic_manager = ManagerStatic {
        handler: &basic_handler,
    };
    static_basic_manager.do_something();
    println!(" ");

    let static_advanced_manager = ManagerStatic {
        handler: &advanced_handler,
    };
    static_advanced_manager.do_something();
    println!(" ");

    dbg!(type_of(&basic_handler));
    dbg!(type_of(&advanced_handler));

    dbg!(type_of(&basic_manager));
    dbg!(type_of(&advanced_manager));

    dbg!( type_of(&static_basic_manager));
    dbg!(type_of(&static_advanced_manager));

}
