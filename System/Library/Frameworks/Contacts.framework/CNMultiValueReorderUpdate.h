/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/CNMultiValueUpdate.h>

@class NSOrderedSet;

@interface CNMultiValueReorderUpdate : CNMultiValueUpdate {

	NSOrderedSet* _values;

}

@property (nonatomic,copy,readonly) NSOrderedSet * values;              //@synthesize values=_values - In the implementation block
-(id)description;
-(NSOrderedSet *)values;
-(id)initWithValues:(id)arg1 ;
-(void)applyToMutableMultiValue:(id)arg1 withIdentifierMap:(id)arg2 ;
-(BOOL)applyToABPerson:(void*)arg1 abmultivalue:(void*)arg2 propertyDescription:(id)arg3 logger:(id)arg4 error:(id*)arg5 ;
-(long long)compareIndexOfIdentifier:(id)arg1 toIndexOfIdentifier:(id)arg2 ;
@end

