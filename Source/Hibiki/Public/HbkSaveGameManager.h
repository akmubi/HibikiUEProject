#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "TngGameSystem.h"
#include "HbkSaveGameManager.generated.h"

class AActor;
class UDataTable;
class UHbkSaveGameDataGlobal;
class UHbkSaveGameDataStageCheckpoint;
class UHbkSaveGameDataStageProgress;
class UHbkSaveGameDetail;
class UHbkSaveGameIndicator;
class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class UHbkSaveGameManager : public UTngGameSystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHbkSaveGameDetail*> CachedDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkSaveGameDataGlobal* CachedSaveGameDataGlobal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkSaveGameDataStageProgress* CachedSaveGameDataStageProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkSaveGameDataStageCheckpoint* CachedSaveGameDataStageCheckpoint;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FSoftClassPath IndicatorClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkSaveGameIndicator* Indicator;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> StaticThumbnailTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* StaticThumbnailTexturePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* ThumbnailRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FString XboxSandboxName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FSoftClassPath StageInfoDataTableClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* StageInfoDataTable;
    
public:
    UHbkSaveGameManager();

    UFUNCTION(BlueprintCallable)
    void SetCurrentSlotNameByIndex(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentSlotName(const FString& SlotName);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnActorPreEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndReason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString MakeSaveSlotNameFromUnused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString MakeSaveSlotNameFromIndex(int32 SlotIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void K2_GetCachedDetails(UPARAM(Ref) TArray<UHbkSaveGameDetail*>& Details) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWorkingJob() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUnusedSlots() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCachedDetails() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentSlotName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkSaveGameDetail* FindCachedDetail(const FString& SlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkSaveGameDetail* FindCachedCurrentSlotDetail() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearCurrentSlotName();
    
};

