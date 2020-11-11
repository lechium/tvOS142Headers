/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSFetchIndexDescription, NSSQLEntity, NSMutableArray;

@interface NSSQLIndex : NSObject {

	NSFetchIndexDescription* _indexDescription;
	NSSQLEntity* _sqlEntity;
	NSMutableArray* _createStrings;
	NSMutableArray* _dropStrings;
	NSMutableArray* _updateStrings;

}

@property (nonatomic,retain,readonly) NSFetchIndexDescription * indexDescription;              //@synthesize indexDescription=_indexDescription - In the implementation block
@property (nonatomic,readonly) NSSQLEntity * sqlEntity;                                        //@synthesize sqlEntity=_sqlEntity - In the implementation block
@property (nonatomic,retain) NSMutableArray * createTableStatements;                           //@synthesize createStrings=_createStrings - In the implementation block
@property (nonatomic,retain) NSMutableArray * dropTableStatements;                             //@synthesize dropStrings=_dropStrings - In the implementation block
@property (nonatomic,retain) NSMutableArray * updateTableStatements;                           //@synthesize updateStrings=_updateStrings - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSSQLEntity *)sqlEntity;
-(id)initForIndexDescription:(id)arg1 sqlEntity:(id)arg2 ;
-(NSFetchIndexDescription *)indexDescription;
-(void)setCreateTableStatements:(NSMutableArray *)arg1 ;
-(void)setDropTableStatements:(NSMutableArray *)arg1 ;
-(void)setUpdateTableStatements:(NSMutableArray *)arg1 ;
-(NSMutableArray *)createTableStatements;
-(NSMutableArray *)dropTableStatements;
-(NSMutableArray *)updateTableStatements;
-(id)generateStatementsForStore:(id)arg1 ;
-(id)dropStatementsForStore:(id)arg1 ;
-(id)bulkUpdateStatementsForStore:(id)arg1 ;
-(BOOL)isUnique;
@end
