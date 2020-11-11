/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary;

@interface TRDeviceSetupAction : NSObject {

	NSString* _actionType;
	NSDictionary* _parameters;

}

@property (nonatomic,copy,readonly) NSString * actionType;                      //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * parameters;                  //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) unsigned long long protocolVersion; 
+(id)actionWithData:(id)arg1 error:(id*)arg2 supportsLegacy:(BOOL)arg3 ;
+(id)actionWithActionType:(id)arg1 parameters:(id)arg2 ;
-(id)description;
-(id)init;
-(NSDictionary *)parameters;
-(NSString *)actionType;
-(unsigned long long)protocolVersion;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(id)propertyListRepresentation;
-(id)_initWithActionType:(id)arg1 parameters:(id)arg2 ;
@end

