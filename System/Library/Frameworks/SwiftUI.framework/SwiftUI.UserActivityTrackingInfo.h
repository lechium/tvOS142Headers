/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/SwiftUI.framework/SwiftUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSUserActivityDelegate.h>

@class NSString;

@interface SwiftUI.UserActivityTrackingInfo : NSObject <NSUserActivityDelegate> {

	 userActivity;
	 handlers;
	 sceneBridge;
	 activityType;

}

@property (readonly,nonatomic) NSString * description; 
-(NSString *)description;
-(id)init;
-(void)userActivityWillSave:(id)arg1 ;
@end
