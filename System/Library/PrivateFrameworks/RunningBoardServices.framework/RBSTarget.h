/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/RBSProcessMatching.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RBSProcessIdentifier, RBSProcessIdentity, NSString;

@interface RBSTarget : NSObject <RBSXPCSecureCoding, RBSProcessMatching, NSCopying> {

	RBSProcessIdentifier* _processIdentifier;
	RBSProcessIdentity* _processIdentity;
	NSString* _environment;
	NSString* _shortDescription;

}

@property (getter=isSystem,nonatomic,readonly) BOOL system; 
@property (nonatomic,readonly) RBSProcessIdentifier * processIdentifier;              //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (nonatomic,readonly) RBSProcessIdentity * processIdentity;                  //@synthesize processIdentity=_processIdentity - In the implementation block
@property (nonatomic,copy,readonly) NSString * environment;                           //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) NSString * shortDescription;                           //@synthesize shortDescription=_shortDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentProcess;
+(id)targetWithPid:(int)arg1 environmentIdentifier:(id)arg2 ;
+(id)targetWithProcessIdentifier:(id)arg1 ;
+(id)targetWithProcessIdentity:(id)arg1 ;
+(id)targetWithPid:(int)arg1 ;
+(id)systemTarget;
+(id)targetWithProcessIdentity:(id)arg1 environmentIdentifier:(id)arg2 ;
+(BOOL)supportsRBSXPCSecureCoding;
+(id)targetWithProcessIdentifier:(id)arg1 environmentIdentifier:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(id)init;
-(RBSProcessIdentifier *)processIdentifier;
-(NSString *)environment;
-(NSString *)shortDescription;
-(RBSProcessIdentity *)processIdentity;
-(BOOL)matchesProcess:(id)arg1 ;
-(BOOL)isSystem;
-(id)processPredicate;
-(id)copyWithEuid:(unsigned)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
@end
