// Build don't link: 
// GROUPS uncaught
// Cfront bug A.4 (See Language System Release Notes for the
// SPARCompiler C++ version 3.0)

struct assign {
  assign& operator = (const assign&);
};
union U {
  assign a;	// ERROR - member of union cannot have op= 9.4// ERROR - .*
};
