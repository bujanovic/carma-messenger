#pragma once
/*
 * Copyright (C) 2020 LEIDOS.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not
 * use this file except in compliance with the License. You may obtain a copy of
 * the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations under
 * the License.
 */
#include "cpp_message.h"

namespace cpp_message
{
    class Mobility_Response
    {
            private:
            static const int STATIC_ID_MAX_LENGTH=16;
            std::string BSM_ID_DEFAULT="00000000";
            const int BSM_ID_LENGTH=BSM_ID_DEFAULT.length();
            std::string STRING_DEFAULT="[]";
            const int TIMESTAMP_LENGTH=std::to_string(INT64_MAX).length();
            std::string GUID_DEFAULT= "00000000-0000-0000-0000-000000000000";
            const int GUID_LENGTH=GUID_DEFAULT.length();

            public:
             //helper functions for message decode/encode
            /**
             * \brief helper function for Mobility Response message decoding.
             * @param binary_array Container with binary input.
             * @return decoded ros message, returns null if decoding fails. 
             */
            cav_msgs::MobilityResponse decode_mobility_response_message(std::vector<uint8_t>& binary_array);
            /**
             * helper functions for Mobility Response message encoding.
             * @param plainMessage contains mobility response ros message to be encoded as byte array.
             * @return encoded byte array returns null if encoding fails. 
             */
            boost::optional<std::vector<uint8_t>> encode_mobility_response_message(cav_msgs::MobilityResponse plainMessage);

    };
}