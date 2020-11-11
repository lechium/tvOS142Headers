/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <ShareSheet/UIActivityItemProvider.h>

@class PKPass, PKPassView, PKLinkedApplication;

@interface PKActivityItemProvider : UIActivityItemProvider {

	PKPass* _pass;
	PKPassView* _passView;
	PKLinkedApplication* _linkedApp;
	long long _sharingMethod;

}
-(id)item;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(CGSize)arg3 ;
-(id)initWithPass:(id)arg1 passView:(id)arg2 linkedApp:(id)arg3 sharingMethod:(long long)arg4 ;
@end

