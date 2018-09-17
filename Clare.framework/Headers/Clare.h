//
//  Clare.h
//  Clare
//

#import <UIKit/UIKit.h>
#import <Smooch/SKTMessageAction.h>

//! Project version number for Clare.
FOUNDATION_EXPORT double ClareVersionNumber;

//! Project version string for Clare.
FOUNDATION_EXPORT const unsigned char ClareVersionString[];

@protocol ReplysDelegate <NSObject>
-(void)didGetReply:(SKTMessageAction *_Nonnull)action;
@end

// In this header, you should import all the public headers of your framework using statements like #import <Clare/PublicHeader.h>
@interface Clare : NSObject
+ (Clare*)sharedManager;
-(void)initWithId:(NSString*)id;
-(void)show;
-(void)hide;
-(void)recover;
-(void)collapseChatHeads;


-(void)setThemeColor:(UIColor*)themeColor;
-(UIColor*)getThemeColor;

-(void)setBubbleImage:(UIImage*)bubbleImage;

-(void)setAvatarImage:(UIImage*)avatarImage;
-(UIImage*)getAvatarImage;

-(void)setDisclaimer:(NSString *)disclaimerLessStr withAll:(NSString *)disclaimerAllStr;
-(NSString*)getLessDisclaimer;
-(NSString*)getAllDisclaimer;

-(void)setLanguages:(NSMutableArray *)languages;
-(NSMutableArray*)getLanguages;

-(void)setVoiceEnable:(bool)enable;
-(bool)getVoiceEnable;

-(void)setMicrophoneEnable:(bool)enable;
-(bool)getMicrophoneEnable;

-(void)setClareSpeechApi:(NSString *)api;
-(NSString *)getClareSpeechApi;

-(void)setClareSpeechPhraseHints:(NSString *)language withHints:(NSArray *)hintsArray;
-(NSArray *)getClareSpeechPhraseHints:(NSString *)language;

-(void)setReplyButtonInOneRow:(bool)isInOneRow;
-(bool)getReplyButtonInOneRow;

-(void)setLanguageDetection:(bool)isLanguageDetection;
-(bool)getLanguageDetection;

-(void)setTitle:(NSString *)language withTitle:(NSString *)title;
-(NSString *)getTitle:(NSString *)language;

-(void)setDisclaimer:(NSString *)language withDisclaimer:(NSArray *)disclaimer;
-(NSArray *)getDisclaimer:(NSString *)language;

-(void)showWithoudWidget;

@property(weak, nullable) id<ReplysDelegate> replysDelegate;
-(void)setReplysAction:(SKTMessageAction *_Nonnull)action collapse:(Boolean)willCollapse;

@end

