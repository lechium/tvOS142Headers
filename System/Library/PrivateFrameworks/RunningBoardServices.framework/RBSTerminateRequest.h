/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <RunningBoardServices/RBSRequest.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol RBSServiceLocalProtocol;
@class RBSProcessPredicate, RBSTerminateContext, NSString;

@interface RBSTerminateRequest : RBSRequest <RBSXPCSecureCoding, NSCopying> {

	id<RBSServiceLocalProtocol> _service;
	BOOL _targetsAllManagedProcesses;
	RBSProcessPredicate* _predicate;
	RBSTerminateContext* _context;

}

@property (nonatomic,readonly) BOOL targetsAllManagedProcesses;              //@synthesize targetsAllManagedProcesses=_targetsAllManagedProcesses - In the implementation block
@property (nonatomic,retain) RBSProcessPredicate * predicate;                //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) RBSTerminateContext * context;                //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(RBSProcessPredicate *)predicate;
-(void)setPredicate:(RBSProcessPredicate *)arg1 ;
-(RBSTerminateContext *)context;
-(id)initWithProcessIdentity:(id)arg1 context:(id)arg2 ;
-(BOOL)execute:(out id*)arg1 error:(out id*)arg2 ;
-(BOOL)execute:(out id*)arg1 ;
-(id)initWithPredicate:(id)arg1 context:(id)arg2 ;
-(BOOL)targetsAllManagedProcesses;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 context:(id)arg2 service:(id)arg3 ;
-(id)initWithProcessIdentifier:(id)arg1 context:(id)arg2 ;
-(id)initForAllManagedWithReason:(id)arg1 ;
@end

