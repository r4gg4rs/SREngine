/**
 * @author    Jani Haippo
 * @version   03.2015
 **/
 
 #ifndef STREETRACER_IWINDOW_H
 #define STREETRACER_IWINDOW_H	
 
#include <string> 
 namespace SR
 {
    class IWindow
    {
     protected:
        int   m_width;
        int   m_height;
      public:
        virtual void Create(std::string& name, int width, int height)=0;
        virtual void Resize(int width, int height)=0;
        virtual void Clear()=0;
  		virtual void SwapBuffers()=0; 
     
     	int GetWidth()
     	{
     		return m_width;
     	}
     	
     	int GetHeight()
     	{
     		return m_height;
     	}
     
    };
    
}
 #endif
