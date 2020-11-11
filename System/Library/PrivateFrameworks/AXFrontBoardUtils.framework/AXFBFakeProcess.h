/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AXFrontBoardUtils.framework/AXFrontBoardUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AXFBFakeProcessState, NSString;

@interface AXFBFakeProcess : NSObject {

	AXFBFakeProcessState* _state;
	NSString* _bundleIdentifier;

}

@property (nonatomic,retain) AXFBFakeProcessState * state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(AXFBFakeProcessState *)state;
-(void)setState:(AXFBFakeProcessState *)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end
