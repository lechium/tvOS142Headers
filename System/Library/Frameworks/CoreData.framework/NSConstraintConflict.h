/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:07:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSManagedObject, NSDictionary;

@interface NSConstraintConflict : NSObject <NSSecureCoding> {

	NSArray* _constraint;
	NSManagedObject* _databaseObject;
	NSDictionary* _databaseSnapshot;
	NSDictionary* _conflictedValues;
	NSArray* _conflictingObjects;
	NSArray* _conflictingSnapshots;

}

@property (copy,readonly) NSArray * constraint;                            //@synthesize constraint=_constraint - In the implementation block
@property (copy,readonly) NSDictionary * constraintValues;                 //@synthesize conflictedValues=_conflictedValues - In the implementation block
@property (retain,readonly) NSManagedObject * databaseObject;              //@synthesize databaseObject=_databaseObject - In the implementation block
@property (retain,readonly) NSDictionary * databaseSnapshot;               //@synthesize databaseSnapshot=_databaseSnapshot - In the implementation block
@property (copy,readonly) NSArray * conflictingObjects;                    //@synthesize conflictingObjects=_conflictingObjects - In the implementation block
@property (copy,readonly) NSArray * conflictingSnapshots;                  //@synthesize conflictingSnapshots=_conflictingSnapshots - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_doCleanupForXPCStore:(id)arg1 context:(id)arg2 ;
-(NSArray *)conflictingObjects;
-(NSArray *)constraint;
-(NSManagedObject *)databaseObject;
-(id)initWithConstraint:(id)arg1 databaseObject:(id)arg2 databaseSnapshot:(id)arg3 conflictingObjects:(id)arg4 conflictingSnapshots:(id)arg5 ;
-(BOOL)_isDBConflict;
-(NSDictionary *)constraintValues;
-(NSArray *)conflictingSnapshots;
-(NSDictionary *)databaseSnapshot;
@end

