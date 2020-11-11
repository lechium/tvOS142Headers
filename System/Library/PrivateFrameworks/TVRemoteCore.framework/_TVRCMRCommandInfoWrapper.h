/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface _TVRCMRCommandInfoWrapper : NSObject {

	void* _info;

}

@property (nonatomic,readonly) unsigned command; 
@property (nonatomic,copy,readonly) NSString * commandDescription; 
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
-(id)description;
-(void)dealloc;
-(BOOL)isEnabled;
-(unsigned)command;
-(NSString *)commandDescription;
-(id)initWithCommandInfo:(void*)arg1 ;
@end

