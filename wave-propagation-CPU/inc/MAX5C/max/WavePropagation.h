/**\file */
#ifndef SLIC_DECLARATIONS_WavePropagation_H
#define SLIC_DECLARATIONS_WavePropagation_H
#include "MaxSLiCInterface.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define WavePropagation_PCIE_ALIGNMENT (16)


/*----------------------------------------------------------------------------*/
/*--------------------------- Interface writeLMem ----------------------------*/
/*----------------------------------------------------------------------------*/




/**
 * \brief Basic static function for the interface 'writeLMem'.
 * 
 * \param [in] param_size Interface Parameter "size".
 * \param [in] param_start Interface Parameter "start".
 * \param [in] instream_fromcpu The stream should be of size ( param_size * 4) bytes.
 */
void WavePropagation_writeLMem(
	int32_t param_size,
	int32_t param_start,
	const float *instream_fromcpu);

/**
 * \brief Basic static non-blocking function for the interface 'writeLMem'.
 * 
 * Schedule to run on an engine and return immediately.
 * The status of the run can be checked either by ::max_wait or ::max_nowait;
 * note that one of these *must* be called, so that associated memory can be released.
 * 
 * 
 * \param [in] param_size Interface Parameter "size".
 * \param [in] param_start Interface Parameter "start".
 * \param [in] instream_fromcpu The stream should be of size ( param_size * 4) bytes.
 * \return A handle on the execution status, or NULL in case of error.
 */
max_run_t *WavePropagation_writeLMem_nonblock(
	int32_t param_size,
	int32_t param_start,
	const float *instream_fromcpu);

/**
 * \brief Advanced static interface, structure for the engine interface 'writeLMem'
 * 
 */
typedef struct { 
	int32_t param_size; /**<  [in] Interface Parameter "size". */
	int32_t param_start; /**<  [in] Interface Parameter "start". */
	const float *instream_fromcpu; /**<  [in] The stream should be of size ( param_size * 4) bytes. */
} WavePropagation_writeLMem_actions_t;

/**
 * \brief Advanced static function for the interface 'writeLMem'.
 * 
 * \param [in] engine The engine on which the actions will be executed.
 * \param [in,out] interface_actions Actions to be executed.
 */
void WavePropagation_writeLMem_run(
	max_engine_t *engine,
	WavePropagation_writeLMem_actions_t *interface_actions);

/**
 * \brief Advanced static non-blocking function for the interface 'writeLMem'.
 *
 * Schedule the actions to run on the engine and return immediately.
 * The status of the run can be checked either by ::max_wait or ::max_nowait;
 * note that one of these *must* be called, so that associated memory can be released.
 *
 * 
 * \param [in] engine The engine on which the actions will be executed.
 * \param [in] interface_actions Actions to be executed.
 * \return A handle on the execution status of the actions, or NULL in case of error.
 */
max_run_t *WavePropagation_writeLMem_run_nonblock(
	max_engine_t *engine,
	WavePropagation_writeLMem_actions_t *interface_actions);

/**
 * \brief Group run advanced static function for the interface 'writeLMem'.
 * 
 * \param [in] group Group to use.
 * \param [in,out] interface_actions Actions to run.
 *
 * Run the actions on the first device available in the group.
 */
void WavePropagation_writeLMem_run_group(max_group_t *group, WavePropagation_writeLMem_actions_t *interface_actions);

/**
 * \brief Group run advanced static non-blocking function for the interface 'writeLMem'.
 * 
 *
 * Schedule the actions to run on the first device available in the group and return immediately.
 * The status of the run must be checked with ::max_wait. 
 * Note that use of ::max_nowait is prohibited with non-blocking running on groups:
 * see the ::max_run_group_nonblock documentation for more explanation.
 *
 * \param [in] group Group to use.
 * \param [in] interface_actions Actions to run.
 * \return A handle on the execution status of the actions, or NULL in case of error.
 */
max_run_t *WavePropagation_writeLMem_run_group_nonblock(max_group_t *group, WavePropagation_writeLMem_actions_t *interface_actions);

/**
 * \brief Array run advanced static function for the interface 'writeLMem'.
 * 
 * \param [in] engarray The array of devices to use.
 * \param [in,out] interface_actions The array of actions to run.
 *
 * Run the array of actions on the array of engines.  The length of interface_actions
 * must match the size of engarray.
 */
void WavePropagation_writeLMem_run_array(max_engarray_t *engarray, WavePropagation_writeLMem_actions_t *interface_actions[]);

/**
 * \brief Array run advanced static non-blocking function for the interface 'writeLMem'.
 * 
 *
 * Schedule to run the array of actions on the array of engines, and return immediately.
 * The length of interface_actions must match the size of engarray.
 * The status of the run can be checked either by ::max_wait or ::max_nowait;
 * note that one of these *must* be called, so that associated memory can be released.
 *
 * \param [in] engarray The array of devices to use.
 * \param [in] interface_actions The array of actions to run.
 * \return A handle on the execution status of the actions, or NULL in case of error.
 */
max_run_t *WavePropagation_writeLMem_run_array_nonblock(max_engarray_t *engarray, WavePropagation_writeLMem_actions_t *interface_actions[]);

/**
 * \brief Converts a static-interface action struct into a dynamic-interface max_actions_t struct.
 *
 * Note that this is an internal utility function used by other functions in the static interface.
 *
 * \param [in] maxfile The maxfile to use.
 * \param [in] interface_actions The interface-specific actions to run.
 * \return The dynamic-interface actions to run, or NULL in case of error.
 */
max_actions_t* WavePropagation_writeLMem_convert(max_file_t *maxfile, WavePropagation_writeLMem_actions_t *interface_actions);



/*----------------------------------------------------------------------------*/
/*---------------------------- Interface readLMem ----------------------------*/
/*----------------------------------------------------------------------------*/




/**
 * \brief Basic static function for the interface 'readLMem'.
 * 
 * \param [in] param_size Interface Parameter "size".
 * \param [in] param_start Interface Parameter "start".
 * \param [out] outstream_tocpu The stream should be of size ( param_size * 4) bytes.
 */
void WavePropagation_readLMem(
	int32_t param_size,
	int32_t param_start,
	float *outstream_tocpu);

/**
 * \brief Basic static non-blocking function for the interface 'readLMem'.
 * 
 * Schedule to run on an engine and return immediately.
 * The status of the run can be checked either by ::max_wait or ::max_nowait;
 * note that one of these *must* be called, so that associated memory can be released.
 * 
 * 
 * \param [in] param_size Interface Parameter "size".
 * \param [in] param_start Interface Parameter "start".
 * \param [out] outstream_tocpu The stream should be of size ( param_size * 4) bytes.
 * \return A handle on the execution status, or NULL in case of error.
 */
max_run_t *WavePropagation_readLMem_nonblock(
	int32_t param_size,
	int32_t param_start,
	float *outstream_tocpu);

/**
 * \brief Advanced static interface, structure for the engine interface 'readLMem'
 * 
 */
typedef struct { 
	int32_t param_size; /**<  [in] Interface Parameter "size". */
	int32_t param_start; /**<  [in] Interface Parameter "start". */
	float *outstream_tocpu; /**<  [out] The stream should be of size ( param_size * 4) bytes. */
} WavePropagation_readLMem_actions_t;

/**
 * \brief Advanced static function for the interface 'readLMem'.
 * 
 * \param [in] engine The engine on which the actions will be executed.
 * \param [in,out] interface_actions Actions to be executed.
 */
void WavePropagation_readLMem_run(
	max_engine_t *engine,
	WavePropagation_readLMem_actions_t *interface_actions);

/**
 * \brief Advanced static non-blocking function for the interface 'readLMem'.
 *
 * Schedule the actions to run on the engine and return immediately.
 * The status of the run can be checked either by ::max_wait or ::max_nowait;
 * note that one of these *must* be called, so that associated memory can be released.
 *
 * 
 * \param [in] engine The engine on which the actions will be executed.
 * \param [in] interface_actions Actions to be executed.
 * \return A handle on the execution status of the actions, or NULL in case of error.
 */
max_run_t *WavePropagation_readLMem_run_nonblock(
	max_engine_t *engine,
	WavePropagation_readLMem_actions_t *interface_actions);

/**
 * \brief Group run advanced static function for the interface 'readLMem'.
 * 
 * \param [in] group Group to use.
 * \param [in,out] interface_actions Actions to run.
 *
 * Run the actions on the first device available in the group.
 */
void WavePropagation_readLMem_run_group(max_group_t *group, WavePropagation_readLMem_actions_t *interface_actions);

/**
 * \brief Group run advanced static non-blocking function for the interface 'readLMem'.
 * 
 *
 * Schedule the actions to run on the first device available in the group and return immediately.
 * The status of the run must be checked with ::max_wait. 
 * Note that use of ::max_nowait is prohibited with non-blocking running on groups:
 * see the ::max_run_group_nonblock documentation for more explanation.
 *
 * \param [in] group Group to use.
 * \param [in] interface_actions Actions to run.
 * \return A handle on the execution status of the actions, or NULL in case of error.
 */
max_run_t *WavePropagation_readLMem_run_group_nonblock(max_group_t *group, WavePropagation_readLMem_actions_t *interface_actions);

/**
 * \brief Array run advanced static function for the interface 'readLMem'.
 * 
 * \param [in] engarray The array of devices to use.
 * \param [in,out] interface_actions The array of actions to run.
 *
 * Run the array of actions on the array of engines.  The length of interface_actions
 * must match the size of engarray.
 */
void WavePropagation_readLMem_run_array(max_engarray_t *engarray, WavePropagation_readLMem_actions_t *interface_actions[]);

/**
 * \brief Array run advanced static non-blocking function for the interface 'readLMem'.
 * 
 *
 * Schedule to run the array of actions on the array of engines, and return immediately.
 * The length of interface_actions must match the size of engarray.
 * The status of the run can be checked either by ::max_wait or ::max_nowait;
 * note that one of these *must* be called, so that associated memory can be released.
 *
 * \param [in] engarray The array of devices to use.
 * \param [in] interface_actions The array of actions to run.
 * \return A handle on the execution status of the actions, or NULL in case of error.
 */
max_run_t *WavePropagation_readLMem_run_array_nonblock(max_engarray_t *engarray, WavePropagation_readLMem_actions_t *interface_actions[]);

/**
 * \brief Converts a static-interface action struct into a dynamic-interface max_actions_t struct.
 *
 * Note that this is an internal utility function used by other functions in the static interface.
 *
 * \param [in] maxfile The maxfile to use.
 * \param [in] interface_actions The interface-specific actions to run.
 * \return The dynamic-interface actions to run, or NULL in case of error.
 */
max_actions_t* WavePropagation_readLMem_convert(max_file_t *maxfile, WavePropagation_readLMem_actions_t *interface_actions);



/*----------------------------------------------------------------------------*/
/*---------------------------- Interface default -----------------------------*/
/*----------------------------------------------------------------------------*/




/**
 * \brief Basic static function for the interface 'default'.
 * 
 * \param [in] param_dtdx2 Interface Parameter "dtdx2".
 * \param [in] param_nx Interface Parameter "nx".
 * \param [in] param_nz Interface Parameter "nz".
 * \param [in] param_rcvr_z Interface Parameter "rcvr_z".
 * \param [in] param_src_x Interface Parameter "src_x".
 * \param [in] param_src_z Interface Parameter "src_z".
 * \param [in] param_steps Interface Parameter "steps".
 */
void WavePropagation(
	float param_dtdx2,
	int32_t param_nx,
	int32_t param_nz,
	int32_t param_rcvr_z,
	int32_t param_src_x,
	int32_t param_src_z,
	int32_t param_steps);

/**
 * \brief Basic static non-blocking function for the interface 'default'.
 * 
 * Schedule to run on an engine and return immediately.
 * The status of the run can be checked either by ::max_wait or ::max_nowait;
 * note that one of these *must* be called, so that associated memory can be released.
 * 
 * 
 * \param [in] param_dtdx2 Interface Parameter "dtdx2".
 * \param [in] param_nx Interface Parameter "nx".
 * \param [in] param_nz Interface Parameter "nz".
 * \param [in] param_rcvr_z Interface Parameter "rcvr_z".
 * \param [in] param_src_x Interface Parameter "src_x".
 * \param [in] param_src_z Interface Parameter "src_z".
 * \param [in] param_steps Interface Parameter "steps".
 * \return A handle on the execution status, or NULL in case of error.
 */
max_run_t *WavePropagation_nonblock(
	float param_dtdx2,
	int32_t param_nx,
	int32_t param_nz,
	int32_t param_rcvr_z,
	int32_t param_src_x,
	int32_t param_src_z,
	int32_t param_steps);

/**
 * \brief Advanced static interface, structure for the engine interface 'default'
 * 
 */
typedef struct { 
	float param_dtdx2; /**<  [in] Interface Parameter "dtdx2". */
	int32_t param_nx; /**<  [in] Interface Parameter "nx". */
	int32_t param_nz; /**<  [in] Interface Parameter "nz". */
	int32_t param_rcvr_z; /**<  [in] Interface Parameter "rcvr_z". */
	int32_t param_src_x; /**<  [in] Interface Parameter "src_x". */
	int32_t param_src_z; /**<  [in] Interface Parameter "src_z". */
	int32_t param_steps; /**<  [in] Interface Parameter "steps". */
} WavePropagation_actions_t;

/**
 * \brief Advanced static function for the interface 'default'.
 * 
 * \param [in] engine The engine on which the actions will be executed.
 * \param [in,out] interface_actions Actions to be executed.
 */
void WavePropagation_run(
	max_engine_t *engine,
	WavePropagation_actions_t *interface_actions);

/**
 * \brief Advanced static non-blocking function for the interface 'default'.
 *
 * Schedule the actions to run on the engine and return immediately.
 * The status of the run can be checked either by ::max_wait or ::max_nowait;
 * note that one of these *must* be called, so that associated memory can be released.
 *
 * 
 * \param [in] engine The engine on which the actions will be executed.
 * \param [in] interface_actions Actions to be executed.
 * \return A handle on the execution status of the actions, or NULL in case of error.
 */
max_run_t *WavePropagation_run_nonblock(
	max_engine_t *engine,
	WavePropagation_actions_t *interface_actions);

/**
 * \brief Group run advanced static function for the interface 'default'.
 * 
 * \param [in] group Group to use.
 * \param [in,out] interface_actions Actions to run.
 *
 * Run the actions on the first device available in the group.
 */
void WavePropagation_run_group(max_group_t *group, WavePropagation_actions_t *interface_actions);

/**
 * \brief Group run advanced static non-blocking function for the interface 'default'.
 * 
 *
 * Schedule the actions to run on the first device available in the group and return immediately.
 * The status of the run must be checked with ::max_wait. 
 * Note that use of ::max_nowait is prohibited with non-blocking running on groups:
 * see the ::max_run_group_nonblock documentation for more explanation.
 *
 * \param [in] group Group to use.
 * \param [in] interface_actions Actions to run.
 * \return A handle on the execution status of the actions, or NULL in case of error.
 */
max_run_t *WavePropagation_run_group_nonblock(max_group_t *group, WavePropagation_actions_t *interface_actions);

/**
 * \brief Array run advanced static function for the interface 'default'.
 * 
 * \param [in] engarray The array of devices to use.
 * \param [in,out] interface_actions The array of actions to run.
 *
 * Run the array of actions on the array of engines.  The length of interface_actions
 * must match the size of engarray.
 */
void WavePropagation_run_array(max_engarray_t *engarray, WavePropagation_actions_t *interface_actions[]);

/**
 * \brief Array run advanced static non-blocking function for the interface 'default'.
 * 
 *
 * Schedule to run the array of actions on the array of engines, and return immediately.
 * The length of interface_actions must match the size of engarray.
 * The status of the run can be checked either by ::max_wait or ::max_nowait;
 * note that one of these *must* be called, so that associated memory can be released.
 *
 * \param [in] engarray The array of devices to use.
 * \param [in] interface_actions The array of actions to run.
 * \return A handle on the execution status of the actions, or NULL in case of error.
 */
max_run_t *WavePropagation_run_array_nonblock(max_engarray_t *engarray, WavePropagation_actions_t *interface_actions[]);

/**
 * \brief Converts a static-interface action struct into a dynamic-interface max_actions_t struct.
 *
 * Note that this is an internal utility function used by other functions in the static interface.
 *
 * \param [in] maxfile The maxfile to use.
 * \param [in] interface_actions The interface-specific actions to run.
 * \return The dynamic-interface actions to run, or NULL in case of error.
 */
max_actions_t* WavePropagation_convert(max_file_t *maxfile, WavePropagation_actions_t *interface_actions);

/**
 * \brief Initialise a maxfile.
 */
max_file_t* WavePropagation_init(void);

/* Error handling functions */
int WavePropagation_has_errors(void);
const char* WavePropagation_get_errors(void);
void WavePropagation_clear_errors(void);
/* Free statically allocated maxfile data */
void WavePropagation_free(void);
/* returns: -1 = error running command; 0 = no error reported */
int WavePropagation_simulator_start(void);
/* returns: -1 = error running command; 0 = no error reported */
int WavePropagation_simulator_stop(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* SLIC_DECLARATIONS_WavePropagation_H */

