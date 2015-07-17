/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKChartCache : NSObject {
    NSMutableDictionary * _cachedResultsByIdentifier;
    <HKChartCacheDataSource> * _dataSource;
    NSHashTable * _observers;
    HKOutstandingFetchOperationManager * _operationManager;
    _HKChartCachePendingFetchOperationManager * _pendingFetchOperationsManager;
    NSArray * _pendingIdentifiers;
    NSMutableDictionary * _resultsLoadedByIdentifier;
    BOOL  _shouldBufferFetchOperations;
}

@property (nonatomic, retain) <HKChartCacheDataSource> *dataSource;
@property (nonatomic, readonly) id dataSourceRespectingType;
@property (nonatomic, retain) HKOutstandingFetchOperationManager *operationManager;
@property (nonatomic) BOOL shouldBufferFetchOperations;

- (void).cxx_destruct;
- (void)_alertObserversDidUpdateResults;
- (id)_operationForIdentifier:(id)arg1;
- (void)addObserver:(id)arg1;
- (BOOL)cacheIsDirtyForIdentifier:(id)arg1;
- (id)cachedResultsForIdentifier:(id)arg1;
- (id)dataSource;
- (id)dataSourceRespectingType;
- (void)fetchResultsForIdentifiers:(id)arg1;
- (id)init;
- (void)invalidateCache;
- (void)invalidateResultsForIdentifiers:(id)arg1;
- (id)operationManager;
- (void)removeObserver:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setOperationManager:(id)arg1;
- (void)setShouldBufferFetchOperations:(BOOL)arg1;
- (BOOL)shouldBufferFetchOperations;

@end