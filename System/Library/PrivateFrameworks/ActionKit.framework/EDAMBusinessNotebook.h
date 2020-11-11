/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATObject.h>

@class NSString, NSNumber;

@interface EDAMBusinessNotebook : FATObject {

	NSString* _notebookDescription;
	NSNumber* _privilege;
	NSNumber* _recommended;

}

@property (nonatomic,retain) NSString * notebookDescription;              //@synthesize notebookDescription=_notebookDescription - In the implementation block
@property (nonatomic,retain) NSNumber * privilege;                        //@synthesize privilege=_privilege - In the implementation block
@property (nonatomic,retain) NSNumber * recommended;                      //@synthesize recommended=_recommended - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setRecommended:(NSNumber *)arg1 ;
-(NSNumber *)recommended;
-(NSNumber *)privilege;
-(void)setPrivilege:(NSNumber *)arg1 ;
-(NSString *)notebookDescription;
-(void)setNotebookDescription:(NSString *)arg1 ;
@end

