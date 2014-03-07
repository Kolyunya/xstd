//  xstd - extension of the C++ standard library
//  Copyright (C) 2013 Oleynikov Nikolay
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
//  Author email: OleynikovNY@mail.ru

namespace xstd
{

                            template <typename type , int dimension>
                            point<type,dimension>::point ( void )
    {

        //	Check if the dimension of the point_object is legal
        this->validate_dimension();

        //	 Set coordinates_object values to zero
        this->set_coordinates_values(0);

    }

                            template <typename type , int dimension>
                            point<type,dimension>::point ( const coordinates_initializer_list& coordinates_object )
    {

        this->validate_dimension_match(coordinates_object);

        this->set_coordinates_values(coordinates_object);

    }


                            template <typename type , int dimension>
    auto                    point<type,dimension>::operator* ( const float multiplier ) const ->
    point
    {

        point pointResult = *this;

        for ( int key = 0 ; key < dimension ; key++ )
        {

            pointResult[key] *= multiplier;

        }

        return pointResult;

    }

                            template <typename type , int dimension>
    auto					point<type,dimension>::operator/ ( const float multiplier ) const ->
    point
    {

        return (*this)*(1/multiplier);

    }

                            template <typename type , int dimension>
    int						point<type,dimension>::get_dimension ( void ) const
    {

        return dimension;

    }

                            template <typename type , int dimension>
    type					point<type,dimension>::get_coordinate_value ( const int coordinateId ) const
    {

        this->validate_coordinate_id(coordinateId);

        return this->coordinates_object[coordinateId];

    }

                            template <typename type , int dimension>
    auto        			point<type,dimension>::get_coordinates_ref ( void ) ->
    coordinates&
    {

        return this->coordinates_object;

    }

                            template <typename type , int dimension>
    auto                    point<type,dimension>::get_coordinates_ref ( void ) const ->
    const coordinates&
    {

        return this->coordinates_object;

    }

                            template <typename type , int dimension>
    void					point<type,dimension>::validate_coordinate_id ( const int coordinateId ) const
    {

        if ( coordinateId >= 0 && dimension <= coordinateId )
        {

            throw dimension_mismatch();

        }

    }

                            template <typename type , int dimension>
    void					point<type,dimension>::validate_dimension ( void ) const
    {

        /*

            Throws an `ExcIllegalDimension` Exceptioneption if the dimension of the point_object is illegal

        */

        if ( dimension <= 0 )
        {

            //throw ExcInvalidDimension();
            throw -1;

        }

    }


}
