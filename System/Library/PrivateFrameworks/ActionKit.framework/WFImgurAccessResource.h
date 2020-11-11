/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/WFAccountAccessResource.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>

@class WFImgurUploadAction, NSString;

@interface WFImgurAccessResource : WFAccountAccessResource <WFActionEventObserver> {

	BOOL _usesAccount;
	WFImgurUploadAction* _action;

}

@property (assign,nonatomic,__weak) WFImgurUploadAction * action;              //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL usesAccount;                                 //@synthesize usesAccount=_usesAccount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFImgurUploadAction *)action;
-(void)setAction:(WFImgurUploadAction *)arg1 ;
-(Class)accountClass;
-(unsigned long long)globalLevelStatus;
-(void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2 ;
-(void)setUsesAccount:(BOOL)arg1 ;
-(BOOL)usesAccount;
@end

