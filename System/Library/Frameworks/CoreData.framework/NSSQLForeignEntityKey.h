/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSSQLColumn.h>

@class NSString, NSSQLForeignKey, NSNumber;

@interface NSSQLForeignEntityKey : NSSQLColumn {

	NSString* _name;
	NSSQLForeignKey* _foreignKey;
	NSNumber* _columnValue;

}
-(id)name;
-(void)dealloc;
-(id)toOneRelationship;
-(id)foreignKey;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(void)_setName:(id)arg1 ;
-(id)initWithEntity:(id)arg1 foreignKey:(id)arg2 ;
-(void)_setColumnValue:(id)arg1 ;
-(id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2 ;
-(id)columnValue;
-(void)setFKForReadOnlyFetch:(id)arg1 ;
@end

