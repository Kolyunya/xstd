﻿#ifndef _XTD_CONSOLE_LOGGER_HPP_
#define _XTD_CONSOLE_LOGGER_HPP_

#include <xtd/io/scout.hpp>
#include <xtd/log/abstract_logger.hpp>

namespace xtd
{

    namespace log
    {

        class console_logger
            :
                public abstract_logger
        {

            public:

                explicit console_logger ( bool add_new_line = true , bool add_time_stamp = true ) noexcept;

            protected:

                virtual void log_data ( const std::string& data ) const noexcept override;

        };

    }

}

#endif