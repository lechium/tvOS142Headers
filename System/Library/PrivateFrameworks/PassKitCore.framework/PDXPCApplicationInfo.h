/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PDXPCApplicationInfo : NSObject {

	unsigned _applicationState;
	NSString* _displayID;

}

@property (nonatomic,readonly) unsigned applicationState;              //@synthesize applicationState=_applicationState - In the implementation block
@property (nonatomic,readonly) NSString * displayID;                   //@synthesize displayID=_displayID - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)displayID;
-(unsigned)applicationState;
@end
