/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebVideoFullscreenController : NSObject {
    struct RefPtr<WebVideoFullscreenControllerContext> { 
        struct WebVideoFullscreenControllerContext {} *m_ptr; 
    }  _context;
    struct RefPtr<WebCore::HTMLVideoElement> { 
        struct HTMLVideoElement {} *m_ptr; 
    }  _videoElement;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didFinishFullscreen:(struct WebVideoFullscreenControllerContext { int (**x1)(); int (**x2)(); int (**x3)(); struct atomic<int> { int x_4_1_1; } x4; struct RefPtr<WebCore::WebVideoFullscreenInterfaceAVKit> { struct WebVideoFullscreenInterfaceAVKit {} *x_5_1_1; } x5; struct RefPtr<WebCore::WebVideoFullscreenModelVideoElement> { struct WebVideoFullscreenModelVideoElement {} *x_6_1_1; } x6; struct RefPtr<WebCore::HTMLVideoElement> { struct HTMLVideoElement {} *x_7_1_1; } x7; struct RetainPtr<CALayer> { void *x_8_1_1; } x8; struct RetainPtr<WebVideoFullscreenController> { void *x_9_1_1; } x9; struct FloatRect { struct FloatPoint { float x_1_2_1; float x_1_2_2; } x_10_1_1; struct FloatSize { float x_2_2_1; float x_2_2_2; } x_10_1_2; } x10; int x11; }*)arg1;
- (void)enterFullscreen:(id)arg1 mode:(unsigned int)arg2;
- (void)exitFullscreen;
- (id)init;
- (void)requestHideAndExitFullscreen;
- (void)setVideoElement:(struct HTMLVideoElement { int (**x1)(); struct Weak<WebCore::JSDOMWrapper> { struct WeakImpl {} *x_2_1_1; } x2; int x3; unsigned int x4; struct ContainerNode {} *x5; struct TreeScope {} *x6; struct Node {} *x7; struct Node {} *x8; union DataUnion { struct RenderObject {} *x_9_1_1; struct NodeRareDataBase {} *x_9_1_2; } x9; struct Node {} *x10; struct Node {} *x11; struct QualifiedName { struct RefPtr<WebCore::QualifiedName::QualifiedNameImpl> { struct QualifiedNameImpl {} *x_1_2_1; } x_12_1_1; } x12; struct RefPtr<WebCore::ElementData> { struct ElementData {} *x_13_1_1; } x13; int (**x14)(); int (**x15)(); int (**x16)(); int (**x17)(); struct ScriptExecutionContext {} *x18; unsigned int x19; int (**x20)(); int (**x21)(); int (**x22)(); int (**x23)(); int (**x24)(); int (**x25)(); int (**x26)(); struct Timer { int (**x_27_1_1)(); double x_27_1_2; double x_27_1_3; double x_27_1_4; int x_27_1_5; unsigned int x_27_1_6; struct Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow, 16> {} *x_27_1_7; struct function<void ()>={type=[12C] {} x_27_1_8; struct __base<void ()> {} *x_27_1_9; } x27; }*)arg1;
- (struct HTMLVideoElement { int (**x1)(); struct Weak<WebCore::JSDOMWrapper> { struct WeakImpl {} *x_2_1_1; } x2; int x3; unsigned int x4; struct ContainerNode {} *x5; struct TreeScope {} *x6; struct Node {} *x7; struct Node {} *x8; union DataUnion { struct RenderObject {} *x_9_1_1; struct NodeRareDataBase {} *x_9_1_2; } x9; struct Node {} *x10; struct Node {} *x11; struct QualifiedName { struct RefPtr<WebCore::QualifiedName::QualifiedNameImpl> { struct QualifiedNameImpl {} *x_1_2_1; } x_12_1_1; } x12; struct RefPtr<WebCore::ElementData> { struct ElementData {} *x_13_1_1; } x13; int (**x14)(); int (**x15)(); int (**x16)(); int (**x17)(); struct ScriptExecutionContext {} *x18; unsigned int x19; int (**x20)(); int (**x21)(); int (**x22)(); int (**x23)(); int (**x24)(); int (**x25)(); int (**x26)(); struct Timer { int (**x_27_1_1)(); double x_27_1_2; double x_27_1_3; double x_27_1_4; int x_27_1_5; unsigned int x_27_1_6; struct Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow, 16> {} *x_27_1_7; struct function<void ()>={type=[12C] {} x_27_1_8; struct __base<void ()> {} *x_27_1_9; } x27; }*)videoElement;

@end
