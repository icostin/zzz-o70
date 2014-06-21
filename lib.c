#include "intern.h"

/* o70_lib_name *************************************************************/
O70_API uint8_t const * C42_CALL o70_lib_name ()
{
    return (uint8_t const *) "ostropel-v0000"
#if C42_ARM32
        "-arm32"
#elif C42_ARM64
        "-arm64"
#elif C42_MIPS
        "-mips"
#elif C42_AMD64
        "-amd64"
#elif C42_IA32
        "-ia32"
#else
        "-unknown_arch"
#endif

#if C42_BSLE
        "-bsle"
#elif C42_BSBE
        "-bsbe"
#elif C42_WSLE
        "-wsle"
#elif C42_WSBE
        "-wsbe"
#endif

#if O70_STATIC
        "-static"
#else
        "-dynamic"
#endif

#if _DEBUG
        "-debug"
#else
        "-release"
#endif
        ;
}

/* o70_status_name **********************************************************/
O70_API uint8_t const * C42_CALL o70_status_name (o70_status_t sc)
{
#define X(_s) case _s: return (uint8_t const *) #_s
    switch (sc)
    {
        X(O70S_OK);

        X(O70S_BUG);
        X(O70S_TODO);
    }
    return (uint8_t const *) "O70S_unspecified";
}

/* o70_world_init ***********************************************************/
O70_API o70_status_t o70_world_init (o70_world_t * w, o70_init_t * ini)
{
    (void) w;
    (void) ini;
    return O70S_TODO;
}

/* o70_world_finish *********************************************************/
O70_API o70_status_t o70_world_finish (o70_world_t * w)
{
    (void) w;
    return O70S_TODO;
}

/* o70_flow_create **********************************************************/
O70_API o70_status_t o70_flow_create 
(
    o70_world_t * w, 
    o70_flow_t * * flow_pp,
    uint32_t max_stack_depth
)
{
    (void) w;
    (void) flow_pp;
    (void) max_stack_depth;
    return O70S_TODO;
}

/* o70_flow_destroy *********************************************************/
O70_API o70_status_t o70_flow_destroy (o70_flow_t * flow)
{
    (void) flow;
    return O70S_TODO;
}


