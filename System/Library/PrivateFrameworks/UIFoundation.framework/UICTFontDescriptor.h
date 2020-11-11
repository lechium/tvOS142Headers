/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/UIFontDescriptor.h>

@interface UICTFontDescriptor : UIFontDescriptor
+(id)fontDescriptorWithFontAttributes:(id)arg1 ;
+(id)fontDescriptorWithName:(id)arg1 size:(double)arg2 ;
+(id)fontDescriptorWithName:(id)arg1 matrix:(CGAffineTransform)arg2 ;
-(id)retain;
-(oneway void)release;
-(BOOL)allowsWeakReference;
-(BOOL)retainWeakReference;
-(unsigned long long)retainCount;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(id)fontAttributes;
-(id)fontDescriptorByAddingAttributes:(id)arg1 ;
-(id)matchingFontDescriptorsWithMandatoryKeys:(id)arg1 ;
-(id)matchingFontDescriptorWithMandatoryKeys:(id)arg1 ;
@end
