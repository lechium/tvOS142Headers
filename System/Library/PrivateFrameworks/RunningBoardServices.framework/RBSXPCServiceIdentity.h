/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class RBSXPCServiceDefinition, NSString, RBSProcessInstance, NSUUID;

@interface RBSXPCServiceIdentity : NSObject <RBSXPCSecureCoding, NSSecureCoding> {

	RBSXPCServiceDefinition* _definition;
	NSString* _sessionID;
	RBSProcessInstance* _host;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) RBSXPCServiceDefinition * definition;              //@synthesize definition=_definition - In the implementation block
@property (nonatomic,copy,readonly) NSString * sessionID;                         //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) RBSProcessInstance * host;                         //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                     //@synthesize uuid=_uuid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)supportsRBSXPCSecureCoding;
+(id)identityWithDefinition:(id)arg1 sessionID:(id)arg2 host:(id)arg3 UUID:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(RBSProcessInstance *)host;
-(NSString *)sessionID;
-(NSUUID *)uuid;
-(RBSXPCServiceDefinition *)definition;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
@end

