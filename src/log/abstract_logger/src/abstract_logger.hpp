#ifndef _ABSTRACT_LOGGER_HPP_
#define _ABSTRACT_LOGGER_HPP_

#include <std/string.hpp>
#include <std/chrono.hpp>

namespace std
{

	class abstract_logger
	{
	
		public:
		
			explicit			abstract_logger ( bool add_new_line = true , bool add_time_stamp = true ) noexcept;
			
			void				log ( const string& data ) const noexcept;

			bool				add_new_line;
			
			bool				add_time_stamp;
			
		protected:
		
			virtual void		log_data ( const string& data ) const noexcept = 0 ;

			void				log_new_line ( void ) const noexcept;
			
			void				log_time_stamp ( void ) const noexcept;
			
			static string		make_time_stamp ( void  ) const noexcept;
			
	};

}

#include "abstract_logger.ipp"

#endif	// _ABSTRACT_LOGGER_HPP_