
#import "DataController.h"
//#import "PRPhotoPlayer.h"

//
@interface MaterialController : DataController
{
    UIView *_itemPane;
    int cate_id;
    
    NSMutableDictionary * cateButtonDict;
}

-(void)refreshDownloadAllFilesWithDict:(NSDictionary *)dict isForce:(BOOL)force_refresh;
@end