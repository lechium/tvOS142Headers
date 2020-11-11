/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServicesUI/AMSUIDynamicViewController.h>
#import <libobjc.A.dylib/AMSUIWebPagePresenter.h>
#import <libobjc.A.dylib/AMSUIDynamicViewControllerDelegate.h>

@class AMSUIWebClientContext, NSString;

@interface AMSUIWebDynamicViewController : AMSUIDynamicViewController <AMSUIWebPagePresenter, AMSUIDynamicViewControllerDelegate> {

	AMSUIWebClientContext* _context;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(void)dynamicViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3 ;
-(void)willPresentPageModel:(id)arg1 appearance:(id)arg2 ;
-(id)initWithContext:(id)arg1 URL:(id)arg2 ;
@end

