/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreData/CoreData-Structs.h>
@class NSString;

@interface NSSQLiteIntarrayTable : NSObject {

	sqlite3_intarrayRef _intarrayTable;
	NSString* _intarrayTableName;

}

@property (assign,nonatomic) sqlite3_intarrayRef intarrayTable;              //@synthesize intarrayTable=_intarrayTable - In the implementation block
@property (nonatomic,retain) NSString * intarrayTableName;                   //@synthesize intarrayTableName=_intarrayTableName - In the implementation block
-(void)dealloc;
-(void)setIntarrayTableName:(NSString *)arg1 ;
-(void)setIntarrayTable:(sqlite3_intarrayRef)arg1 ;
-(sqlite3_intarrayRef)intarrayTable;
-(NSString *)intarrayTableName;
@end

