/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarDaemon/CADFilter.h>

@class NSArray;

@interface CADCompoundFilter : CADFilter {

	NSArray* _filters;
	long long _operation;

}

@property (nonatomic,readonly) NSArray * filters;                //@synthesize filters=_filters - In the implementation block
@property (nonatomic,readonly) long long operation;              //@synthesize operation=_operation - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)operation;
-(BOOL)validate;
-(NSArray *)filters;
-(BOOL)applicableToEntityType:(int)arg1 ;
-(id)extendWhereClause:(id)arg1 usingOperation:(long long)arg2 withValues:(id)arg3 andTypes:(id)arg4 ;
-(id)initWithFilters:(id)arg1 operation:(long long)arg2 ;
@end

