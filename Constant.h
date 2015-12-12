
//for debug
#ifdef DEBUG
#define DEBUG_NSLOG(format, ...) NSLog(format, ## __VA_ARGS__)
#define MCRelease(x) [x release]
#else
#define DEBUG_NSLOG(format, ...)
#define MCRelease(x) [x release], x = nil
#endif

#define SINGLETON_SYNTHE \
+ (id)sharedInstance\
{\
static id shared = nil;\
static dispatch_once_t onceToken;\
dispatch_once(&onceToken,\
^{\
shared = [[self alloc]init];\
});\
return shared;\
}

#define SINGLETON + (id)sharedInstance;

typedef void (^ReturnBlock)(id obj,NSError *error);

//
#define RGBA(r,g,b,a)   [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]


#define iPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)
#define FREEOBJECT(obj)         if(obj != nil){[obj release]; obj = nil;}
#define OBJRIGHT(obj)           (obj.frame.origin.x + obj.frame.size.width)
#define OBJBOTTOM(obj)          (obj.frame.origin.y + obj.frame.size.height)

#define IMAGESIZE(img) CGSizeMake(img.size.width/[UIScreen mainScreen].nativeScale,img.size.height/[UIScreen mainScreen].nativeScale)


#define FIRSTINSTALLAPP (@"FIRSTINSTALLAPP") // 第一次安装程序

#define IOS_8 ([[[UIDevice currentDevice]systemVersion]floatValue]>=8.0)
#define SCREEN_SIZE (IOS_8?CGSizeMake([[UIScreen mainScreen] bounds].size.width, [[UIScreen mainScreen] bounds].size.height):CGSizeMake([[UIScreen mainScreen] bounds].size.height,[[UIScreen mainScreen] bounds].size.width))

#define SPACE (5)
#define  HEIGHT_CELL (44)
#define  HEIGHT_CELLTITLE (30)
#define ALPHA_SWIPVIEW (0.2)
#define DURATION_SHOWVIEW (0.2)
#define MENU_SEPATETORCOLOR_TABLE (RGBA(0xb7,0xb7,0xb7, 0.3))
#define  HEIGHT_SIZE_COUNT (CGFLOAT_MAX)
#define  LINESPACE (1.5)
#define  XSPACE_TEXTLABEL_TABLE (60)// table的宽度，除去左边的间隔和右边箭头的宽度

#define  XSPACE_LEFT_TABLE (15) // table: 左边的间隔
#define  WIDTH_TABLE_WITHACESSTYPE (40)// table的右边箭头的宽度
#define  COLOR_SPERATEROWLINE (RGBA(0xed, 0xed, 0xed, 1))
#define  COLOR_BG_TITLEROW (RGBA(0xd1,0x69 , 0x69, 1.))
#define BODERCGCOLOR (RGBA(197., 198., 199., 1).CGColor)

#define fontContent ([UIFont systemFontOfSize:20])
#define fontTitle ([UIFont systemFontOfSize:17])

#define FONT_BLOCK_FENLEI ([UIFont boldSystemFontOfSize:15]) // 分类列表
#define FONT_BLOCK_FENLEITITLE ([UIFont boldSystemFontOfSize:18]) // 分类列表
#define FONT_FENLEI_EMR ([UIFont systemFontOfSize:15]) 


#define HEIGHT_PICKERVIEW (300)

//#define ISDEMO

// dicom
#define NAME_IMAGEID_DICOMFILE (@"imageid")
// 公司信息
