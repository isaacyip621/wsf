

        #ifndef ADB_GETSYSTEMREQUESTCOUNTRESPONSE_H
        #define ADB_GETSYSTEMREQUESTCOUNTRESPONSE_H

       /**
        * adb_getSystemRequestCountResponse.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.5.1  Built on : Oct 19, 2009 (10:59:34 EDT)
        */

       /**
        *  adb_getSystemRequestCountResponse class
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
        

        typedef struct adb_getSystemRequestCountResponse adb_getSystemRequestCountResponse_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_getSystemRequestCountResponse_t
         * @param env pointer to environment struct
         * @return newly created adb_getSystemRequestCountResponse_t object
         */
        adb_getSystemRequestCountResponse_t* AXIS2_CALL
        adb_getSystemRequestCountResponse_create(
            const axutil_env_t *env );

        /**
         * Free adb_getSystemRequestCountResponse_t object
         * @param  _getSystemRequestCountResponse adb_getSystemRequestCountResponse_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_getSystemRequestCountResponse_free (
            adb_getSystemRequestCountResponse_t* _getSystemRequestCountResponse,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        
        

        /**
         * Getter for return. 
         * @param  _getSystemRequestCountResponse adb_getSystemRequestCountResponse_t object
         * @param env pointer to environment struct
         * @return int
         */
        int AXIS2_CALL
        adb_getSystemRequestCountResponse_get_return(
            adb_getSystemRequestCountResponse_t* _getSystemRequestCountResponse,
            const axutil_env_t *env);

        /**
         * Setter for return.
         * @param  _getSystemRequestCountResponse adb_getSystemRequestCountResponse_t object
         * @param env pointer to environment struct
         * @param arg_return int
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_getSystemRequestCountResponse_set_return(
            adb_getSystemRequestCountResponse_t* _getSystemRequestCountResponse,
            const axutil_env_t *env,
            const int  arg_return);

        /**
         * Resetter for return
         * @param  _getSystemRequestCountResponse adb_getSystemRequestCountResponse_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_getSystemRequestCountResponse_reset_return(
            adb_getSystemRequestCountResponse_t* _getSystemRequestCountResponse,
            const axutil_env_t *env);

        


        /******************************* Checking and Setting NIL values *********************************/
        

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether return is nill
         * @param  _getSystemRequestCountResponse adb_getSystemRequestCountResponse_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_getSystemRequestCountResponse_is_return_nil(
                adb_getSystemRequestCountResponse_t* _getSystemRequestCountResponse,
                const axutil_env_t *env);


        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Deserialize an XML to adb objects
         * @param  _getSystemRequestCountResponse adb_getSystemRequestCountResponse_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_getSystemRequestCountResponse_deserialize(
            adb_getSystemRequestCountResponse_t* _getSystemRequestCountResponse,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _getSystemRequestCountResponse adb_getSystemRequestCountResponse_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_getSystemRequestCountResponse_declare_parent_namespaces(
                    adb_getSystemRequestCountResponse_t* _getSystemRequestCountResponse,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Serialize to an XML from the adb objects
         * @param  _getSystemRequestCountResponse adb_getSystemRequestCountResponse_t object
         * @param env pointer to environment struct
         * @param getSystemRequestCountResponse_om_node node to serialize from
         * @param getSystemRequestCountResponse_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_getSystemRequestCountResponse_serialize(
            adb_getSystemRequestCountResponse_t* _getSystemRequestCountResponse,
            const axutil_env_t *env,
            axiom_node_t* getSystemRequestCountResponse_om_node, axiom_element_t *getSystemRequestCountResponse_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_getSystemRequestCountResponse is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_getSystemRequestCountResponse_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_getSystemRequestCountResponse_t
         * @param env pointer to environment struct
         * @param _return int
         * @return newly created adb_getSystemRequestCountResponse_t object
         */
        adb_getSystemRequestCountResponse_t* AXIS2_CALL
        adb_getSystemRequestCountResponse_create_with_values(
            const axutil_env_t *env,
                int _return);

        


                /**
                 * Free adb_getSystemRequestCountResponse_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _getSystemRequestCountResponse adb_getSystemRequestCountResponse_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                int AXIS2_CALL
                adb_getSystemRequestCountResponse_free_popping_value(
                        adb_getSystemRequestCountResponse_t* _getSystemRequestCountResponse,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for return by property number (1)
         * @param  _getSystemRequestCountResponse adb_getSystemRequestCountResponse_t object
         * @param env pointer to environment struct
         * @return int
         */
        int AXIS2_CALL
        adb_getSystemRequestCountResponse_get_property1(
            adb_getSystemRequestCountResponse_t* _getSystemRequestCountResponse,
            const axutil_env_t *env);

    

     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_GETSYSTEMREQUESTCOUNTRESPONSE_H */
    

