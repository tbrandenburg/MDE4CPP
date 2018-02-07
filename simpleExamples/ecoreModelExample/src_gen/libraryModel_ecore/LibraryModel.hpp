//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef LIBRARYMODEL_ECORE_LIBRARYMODEL_HPP
#define LIBRARYMODEL_ECORE_LIBRARYMODEL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//#include "util/ProfileCallCount.hpp"

#include <map>
#include <string>
#include <vector>

#include "abstractDataTypes/SubsetUnion.hpp"
#include "boost/shared_ptr.hpp"
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
namespace libraryModel_ecore 
{
	class Author;
}

namespace libraryModel_ecore 
{
	class Book;
}

// base class includes

// enum includes

#include "ecore/EObject.hpp"

//*********************************
namespace libraryModel_ecore 
{
	/*!
	 */
	class LibraryModel : virtual public ecore::EObject 

	{
		public:
 			LibraryModel(const LibraryModel &) {}
			LibraryModel& operator=(LibraryModel const&) = delete;

		protected:
			LibraryModel(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~LibraryModel() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr< Bag<libraryModel_ecore::Author> > getAuthors() const = 0;
			
			/*!
			 */
			virtual std::shared_ptr< Bag<libraryModel_ecore::Book> > getBook() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr< Bag<libraryModel_ecore::Author> > m_authors;
			/*!
			 */
			std::shared_ptr< Bag<libraryModel_ecore::Book> > m_book;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
	};

}
#endif /* end of include guard: LIBRARYMODEL_ECORE_LIBRARYMODEL_HPP */

