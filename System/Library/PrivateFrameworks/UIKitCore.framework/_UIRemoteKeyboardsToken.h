/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface _UIRemoteKeyboardsToken : NSObject {

	int _identifier;
	NSString* sceneIdentityString;

}

@property (nonatomic,copy) NSString * sceneIdentityString; 
+(id)uniqueToken;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(NSString *)sceneIdentityString;
-(void)setSceneIdentityString:(NSString *)arg1 ;
@end
