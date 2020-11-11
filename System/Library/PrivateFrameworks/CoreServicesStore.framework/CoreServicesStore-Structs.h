/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreServicesStore.framework/CoreServicesStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct _cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > {
	AB __a_value;
} cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> >;

typedef struct atomic<bool> {
	cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > __a_;
} atomic<bool>;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __CSStore* CSStoreRef;

typedef struct array<unsigned int, 64> {
	unsigned __elems_[64];
} array<unsigned int, 64>;

typedef struct _cxx_atomic_impl<long long, std::__1::__cxx_atomic_base_impl<long long> > {
	Aq __a_value;
} cxx_atomic_impl<long long, std::__1::__cxx_atomic_base_impl<long long> >;

typedef struct optional<unsigned int> {
	/*function pointer*/void* ;
	char __null_state_;
	I) __val_;
	BOOL __engaged_;
} optional<unsigned int>;

typedef struct Pedigree {
	unsigned long long family;
	optional<unsigned int> generationAtCopyTime;
} Pedigree;

typedef struct atomic<long long> {
	cxx_atomic_impl<long long, std::__1::__cxx_atomic_base_impl<long long> > __a_;
} atomic<long long>;

typedef struct Store {
	id dataContainer;
	array<unsigned int, 64> tableOffsets;
	Table arrayTable;
	Table stringTable;
	Table dictionaryTable;
	atomic<long long> enumerationState;
	atomic<long long> getNSDataCallCount;
	Pedigree pedigree;
} Store;

typedef struct _NSZone* NSZoneRef;

