/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet;

@interface PKReusablePassViewQueue : NSObject {

	NSMutableSet* _passViews;

}
-(id)initWithCount:(unsigned long long)arg1 ;
-(id)dequeueReusablePassView;
-(void)enqueueReusablePassView:(id)arg1 ;
@end
