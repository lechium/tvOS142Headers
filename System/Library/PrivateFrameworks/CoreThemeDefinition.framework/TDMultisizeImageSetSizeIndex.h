/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSSet, TDMultisizeImageSetProduction;

@interface TDMultisizeImageSetSizeIndex : NSManagedObject

@property (assign,nonatomic) int height; 
@property (assign,nonatomic) int width; 
@property (assign,nonatomic) short index; 
@property (nonatomic,retain) NSSet * imageRenditions; 
@property (nonatomic,retain) TDMultisizeImageSetProduction * multisizeImageSetProduction; 
@property (nonatomic,retain) NSSet * multisizeImageSetRenditions; 
@end

