//
//  Clare.h
//  Clare
//

#import <UIKit/UIKit.h>

//! Project version number for Clare.
FOUNDATION_EXPORT double ClareVersionNumber;

//! Project version string for Clare.
FOUNDATION_EXPORT const unsigned char ClareVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <Clare/PublicHeader.h>
@interface Clare : NSObject
+ (Clare*)sharedManager;
-(void)initWithId:(NSString*)id;
-(void)show;

@end

