#include <sys/syscall.h>
#include <unistd.h>
#include <EGL/egl.h>
#include <GLES3/gl3.h>
#include <vulkan/vk_platform.h>
#include <vulkan/vulkan_core.h>
#include <vulkan/vulkan_wayland.h>
#include <wayland-client.h>
#include <wayland-client-protocol.h>
#include <wayland-egl.h>
#include <xdg-shell.h>
#include <libdrm/drm.h>
#include <gbm.h>
#include <linux/input-event-codes.h>
int main(int argc, char** argv)
{
 switch argv[0]{
 case 'h':{
  syscall(1,1,"Usage: opendoka2 [OPTIONS]\n
					OPTIONS:\n
						r [opengles or vulkan] Graphics API.\n
						p [wayland or drm] 		 Windowing system.\n
						h 										 Help.\n",139);
	return 0;
	break;
 }
	case 'r':{
	 
	}
 }
}
