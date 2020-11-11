/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_xpc_object;
@class NSObject, NSMutableDictionary, RBSProcessHandle, NSSet, NSString;

@interface RBSProcessState : NSObject <RBSXPCSecureCoding, NSCopying> {

	NSObject*<OS_xpc_object> _codedState;
	unsigned long long _codedValues;
	NSMutableDictionary* _codedStateCache;
	os_unfair_lock_s _lock;
	unsigned char _taskState;
	unsigned char _debugState;
	unsigned char _terminationResistance;
	BOOL _preventedFromLaunching;
	RBSProcessHandle* _process;
	NSSet* _endowmentNamespaces;
	NSSet* _tags;
	NSSet* _legacyAssertions;
	NSSet* _primitiveAssertions;

}

@property (assign,nonatomic) unsigned char taskState;                                                    //@synthesize taskState=_taskState - In the implementation block
@property (assign,nonatomic) unsigned char debugState;                                                   //@synthesize debugState=_debugState - In the implementation block
@property (assign,nonatomic) unsigned char terminationResistance;                                        //@synthesize terminationResistance=_terminationResistance - In the implementation block
@property (nonatomic,copy) NSSet * endowmentNamespaces;                                                  //@synthesize endowmentNamespaces=_endowmentNamespaces - In the implementation block
@property (nonatomic,copy) NSSet * tags;                                                                 //@synthesize tags=_tags - In the implementation block
@property (nonatomic,copy) NSSet * legacyAssertions;                                                     //@synthesize legacyAssertions=_legacyAssertions - In the implementation block
@property (nonatomic,copy) NSSet * primitiveAssertions;                                                  //@synthesize primitiveAssertions=_primitiveAssertions - In the implementation block
@property (getter=isEmptyState,nonatomic,readonly) BOOL emptyState; 
@property (nonatomic,copy,readonly) NSObject*<OS_xpc_object> codedState;                                 //@synthesize codedState=_codedState - In the implementation block
@property (nonatomic,readonly) RBSProcessHandle * process;                                               //@synthesize process=_process - In the implementation block
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (getter=isDebugging,nonatomic,readonly) BOOL debugging; 
@property (getter=isPreventedFromLaunching,nonatomic,readonly) BOOL preventedFromLaunching;              //@synthesize preventedFromLaunching=_preventedFromLaunching - In the implementation block
@property (nonatomic,copy,readonly) NSSet * assertions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stateWithProcess:(id)arg1 ;
+(void)setActiveStateDescriptor:(id)arg1 ;
+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(NSSet *)tags;
-(BOOL)isRunning;
-(unsigned char)taskState;
-(BOOL)isDebugging;
-(void)setEndowmentNamespaces:(NSSet *)arg1 ;
-(NSSet *)endowmentNamespaces;
-(RBSProcessHandle *)process;
-(NSSet *)assertions;
-(void)setTaskState:(unsigned char)arg1 ;
-(void)setTags:(NSSet *)arg1 ;
-(unsigned char)terminationResistance;
-(void)setTerminationResistance:(unsigned char)arg1 ;
-(NSSet *)legacyAssertions;
-(void)setDebugState:(unsigned char)arg1 ;
-(void)setLegacyAssertions:(NSSet *)arg1 ;
-(void)setPrimitiveAssertions:(NSSet *)arg1 ;
-(NSSet *)primitiveAssertions;
-(BOOL)isDifferentFromState:(id)arg1 significantly:(out BOOL*)arg2 ;
-(BOOL)isEmptyState;
-(void)encodeWithPreviousState:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(BOOL)isPreventedFromLaunching;
-(unsigned char)debugState;
-(NSObject*<OS_xpc_object>)codedState;
@end

