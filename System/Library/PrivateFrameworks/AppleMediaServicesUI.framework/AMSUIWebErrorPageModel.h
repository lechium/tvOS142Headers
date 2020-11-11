/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <libobjc.A.dylib/AMSUIWebPageProvider.h>

@protocol AMSUIWebActionRunnable;
@class NSString, AMSUIWebNavigationBarModel, AMSUIWebClientContext;

@interface AMSUIWebErrorPageModel : NSObject <AMSUIWebPageProvider> {

	BOOL _errorMessageInternalOnly;
	NSString* _backgroundColor;
	NSString* _errorMessage;
	AMSUIWebNavigationBarModel* _navigationBar;
	id<AMSUIWebActionRunnable> _action;
	/*^block*/id _actionBlock;
	NSString* _actionButtonTitle;
	NSString* _errorTitle;
	AMSUIWebClientContext* _context;
	CGSize _windowSize;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;                           //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<AMSUIWebActionRunnable> action;                         //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) id actionBlock;                                              //@synthesize actionBlock=_actionBlock - In the implementation block
@property (nonatomic,retain) NSString * actionButtonTitle;                              //@synthesize actionButtonTitle=_actionButtonTitle - In the implementation block
@property (nonatomic,readonly) NSString * errorMessage;                                 //@synthesize errorMessage=_errorMessage - In the implementation block
@property (assign,nonatomic) BOOL errorMessageInternalOnly;                             //@synthesize errorMessageInternalOnly=_errorMessageInternalOnly - In the implementation block
@property (nonatomic,retain) NSString * errorTitle;                                     //@synthesize errorTitle=_errorTitle - In the implementation block
@property (nonatomic,readonly) AMSUIWebNavigationBarModel * navigationBar;              //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,readonly) NSString * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) BOOL disableReappearPlaceholder; 
@property (nonatomic,readonly) CGSize windowSize;                                       //@synthesize windowSize=_windowSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_messageFromError:(id)arg1 ;
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(id<AMSUIWebActionRunnable>)action;
-(void)setAction:(id<AMSUIWebActionRunnable>)arg1 ;
-(NSString *)errorMessage;
-(NSString *)backgroundColor;
-(CGSize)windowSize;
-(NSString *)errorTitle;
-(void)setErrorTitle:(NSString *)arg1 ;
-(AMSUIWebNavigationBarModel *)navigationBar;
-(void)setActionBlock:(id)arg1 ;
-(id)actionBlock;
-(NSString *)actionButtonTitle;
-(void)setActionButtonTitle:(NSString *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)createViewController;
-(BOOL)disableReappearPlaceholder;
-(BOOL)errorMessageInternalOnly;
-(id)initWithError:(id)arg1 context:(id)arg2 actionBlock:(/*^block*/id)arg3 ;
-(void)setErrorMessageInternalOnly:(BOOL)arg1 ;
@end

