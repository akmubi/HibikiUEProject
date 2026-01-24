#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "EHbkDifficultyType.h"
#include "HbkStageSelectDelegateDelegate.h"
#include "HbkStageSelectController.generated.h"

class UDataTable;
class UHbkSpectraScoreDetailWidget;
class UHbkStageCheckpointWidget;
class UHbkStageSelectMenuWidget;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API AHbkStageSelectController : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkStageSelectDelegate OnStageDecided;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkStageSelectDelegate OnSelectCanceled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StageDetailTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SpectraRoomDetailTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHbkStageSelectMenuWidget> StageSelectWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* StageSelectWidgetClassPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkStageSelectMenuWidget* StageSelectWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHbkStageCheckpointWidget> StageCheckpointWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* StageCheckpointWidgetClassPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkStageCheckpointWidget> StageCheckpointWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHbkSpectraScoreDetailWidget> SpectraHubInfoWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* SpectraHubInfoWidgetClassPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkSpectraScoreDetailWidget> SpectraHubInfoWidget;
    
public:
    AHbkStageSelectController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ShowSpectraHubInfo(UObject* WorldContextObject, FGameplayTag GameRole);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ShowCheckpoint(UObject* WorldContextObject, FGameplayTag GameRole);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DecidedStage(int32 StageNo, EHbkDifficultyType SelectDifficulty);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CloseSpectraHubInfo(UObject* WorldContextObject, FGameplayTag GameRole);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CloseCheckpoint(UObject* WorldContextObject, FGameplayTag GameRole);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CancelSelect();
    
};

