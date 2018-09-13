//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef LIBRARYMODEL_ECORE_PICTURE_HPP
#define LIBRARYMODEL_ECORE_PICTURE_HPP

#include <list>
#include <memory>
#include <string>


// forward declarations



//*********************************
// generated Includes

#include <map>

namespace persistence
{
	namespace interfaces
	{
		class XLoadHandler; // used for Persistence
		class XSaveHandler; // used for Persistence
	}
}

namespace libraryModel_ecore
{
	class LibraryModel_ecoreFactory;
}

//Forward Declaration for used types
namespace libraryModel_ecore 
{
	class Book;
}

namespace libraryModel_ecore 
{
	class NamedElement;
}

// base class includes
#include "libraryModel_ecore/NamedElement.hpp"

// enum includes


//*********************************
namespace libraryModel_ecore 
{
	/*!
	 */
	class Picture:virtual public NamedElement
	{
		public:
 			Picture(const Picture &) {}
			Picture& operator=(Picture const&) = delete;

		protected:
			Picture(){}


			//Additional constructors for the containments back reference

			Picture(std::weak_ptr<libraryModel_ecore::Book > par_book);

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Picture() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual int getPageNumber() const = 0;
			
			/*!
			 */ 
			virtual void setPageNumber (int _pageNumber)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::weak_ptr<libraryModel_ecore::Book > getBook() const = 0;
			
			/*!
			  */
			 virtual void setBook(std::shared_ptr<libraryModel_ecore::Book> _book_book) = 0;
			 

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 */ 
			int m_pageNumber = 0;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::weak_ptr<libraryModel_ecore::Book > m_book;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: LIBRARYMODEL_ECORE_PICTURE_HPP */
