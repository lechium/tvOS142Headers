/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiPolicy/WCAFetchRequest.h>

@class NSDictionary, NSString, NSArray;

@interface WCAFetchSQLiteRequest : WCAFetchRequest {

	NSDictionary* _parameters;
	NSString* _tableName;
	NSArray* _columnNames;
	long long _limit;

}

@property (nonatomic,copy) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,copy) NSString * tableName;                   //@synthesize tableName=_tableName - In the implementation block
@property (nonatomic,copy) NSArray * columnNames;                  //@synthesize columnNames=_columnNames - In the implementation block
@property (assign,nonatomic) long long limit;                      //@synthesize limit=_limit - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)parameters;
-(NSString *)tableName;
-(void)setTableName:(NSString *)arg1 ;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)setLimit:(long long)arg1 ;
-(long long)limit;
-(NSArray *)columnNames;
-(void)setColumnNames:(NSArray *)arg1 ;
@end

