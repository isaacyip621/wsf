

        #ifndef ADB_GETMAXOPERATIONRESPONSETIMERESPONSE_H
        #define ADB_GETMAXOPERATIONRESPONSETIMERESPONSE_H

       /**
        * adb_getMaxOperationResponseTimeResponse.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.5.1  Built on : Oct 19, 2009 (10:59:34 EDT)
        */

       /**
        *  adb_getMaxOperationResponseTimeResponse class
        */

        

        #include <stdio.h>
        #include <axiom.h>
        #include <axis2_util.h>
        #include <axiom_soap.h>
        #include <axis2_client.h>

        #ifdef __cplusplus
        extern "C"
        {
        #endif

        #define ADB_DEFAULT_DIGIT_LIMIT 1024
        #define ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT 64
        

        typedef struct adb_getMaxOperationResponseTimeResponse adb_getMaxOperationResponseTimeResponse_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_getMaxOperationResponseTimeResponse_t
         * @param env pointer to environment struct
         * @return newly created adb_getMaxOperationResponseTimeResponse_t object
         */
        adb_getMaxOperationResponseTimeResponse_t* AXIS2_CALL
        adb_getMaxOperationResponseTimeResponse_create(
            const axutil_env_t *env );

        /**
         * Free adb_getMaxOperationResponseTimeResponse_t object
         * @param  _getMaxOperationResponseTimeResponse adb_getMaxOperationResponseTimeResponse_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_getMaxOperationResponseTimeResponse_free (
            adb_getMaxOperationResponseTimeResponse_t* _getMaxOperationResponseTimeResponse,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        
        

        /**
         * Getter for return. 
         * @param  _getMaxOperationResponseTimeResponse adb_getMaxOperationResponseTimeResponse_t object
         * @param env pointer to environment struct
         * @return int64_t
         */
        int64_t AXIS2_CALL
        adb_getMaxOperationResponseTimeResponse_get_return(
            adb_getMaxOperationResponseTimeResponse_t* _getMaxOperationResponseTimeResponse,
            const axutil_env_t *env);

        /**
         * Setter for return.
         * @param  _getMaxOperationResponseTimeResponse adb_getMaxOperationResponseTimeResponse_t object
         * @param env pointer to environment struct
         * @param arg_return int64_t
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_getMaxOperationResponseTimeResponse_set_return(
            adb_getMaxOperationResponseTimeResponse_t* _getMaxOperationResponseTimeResponse,
            const axutil_env_t *env,
            const int64_t  arg_return);

        /**
         * Resetter for return
         * @param  _getMaxOperationResponseTimeResponse adb_getMaxOperationResponseTimeResponse_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_getMaxOperationResponseTimeResponse_reset_return(
            adb_getMaxOperationResponseTimeResponse_t* _getMaxOperationResponseTimeResponse,
            const axutil_env_t *env);

        


        /******************************* Checking and Setting NIL values *********************************/
        

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether return is nill
         * @param  _getMaxOperationResponseTimeResponse adb_getMaxOperationResponseTimeResponse_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_getMaxOperationResponseTimeResponse_is_return_nil(
                adb_getMaxOperationResponseTimeResponse_t* _getMaxOperationResponseTimeResponse,
                const axutil_env_t *env);


        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Deserialize an XML to adb objects
         * @param  _getMaxOperationResponseTimeResponse adb_getMaxOperationResponseTimeResponse_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_getMaxOperationResponseTimeResponse_deserialize(
            adb_getMaxOperationResponseTimeResponse_t* _getMaxOperationResponseTimeResponse,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _getMaxOperationResponseTimeResponse adb_getMaxOperationResponseTimeResponse_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_getMaxOperationResponseTimeResponse_declare_parent_namespaces(
                    adb_getMaxOperationResponseTimeResponse_t* _getMaxOperationResponseTimeResponse,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Serialize to an XML from the adb objects
         * @param  _getMaxOperationResponseTimeResponse adb_getMaxOperationResponseTimeResponse_t object
         * @param env pointer to environment struct
         * @param getMaxOperationResponseTimeResponse_om_node node to serialize from
         * @param getMaxOperationResponseTimeResponse_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_getMaxOperationResponseTimeResponse_serialize(
            adb_getMaxOperationResponseTimeResponse_t* _getMaxOperationResponseTimeResponse,
            const axutil_env_t *env,
            axiom_node_t* getMaxOperationResponseTimeResponse_om_node, axiom_element_t *getMaxOperationResponseTimeResponse_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_getMaxOperationResponseTimeResponse is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_getMaxOperationResponseTimeResponse_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_getMaxOperationResponseTimeResponse_t
         * @param env pointer to environment struct
         * @param _return int64_t
         * @return newly created adb_getMaxOperationResponseTimeResponse_t object
         */
        adb_getMaxOperationResponseTimeResponse_t* AXIS2_CALL
        adb_getMaxOperationResponseTimeResponse_create_with_values(
            const axutil_env_t *env,
                int64_t _return);

        


                /**
                 * Free adb_getMaxOperationResponseTimeResponse_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _getMaxOperationResponseTimeResponse adb_getMaxOperationResponseTimeResponse_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                int64_t AXIS2_CALL
                adb_getMaxOperationResponseTimeResponse_free_popping_value(
                        adb_getMaxOperationResponseTimeResponse_t* _getMaxOperationResponseTimeResponse,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for return by property number (1)
         * @param  _getMaxOperationResponseTimeResponse adb_getMaxOperationResponseTimeResponse_t object
         * @param env pointer to environment struct
         * @return int64_t
         */
        int64_t AXIS2_CALL
        adb_getMaxOperationResponseTimeResponse_get_property1(
            adb_getMaxOperationResponseTimeResponse_t* _getMaxOperationResponseTimeResponse,
            const axutil_env_t *env);

    

     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_GETMAXOPERATIONRESPONSETIMERESPONSE_H */
    

