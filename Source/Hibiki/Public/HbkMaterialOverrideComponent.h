#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EHbkMaterailOverride_SaveType.h"
#include "HbkMaterialOverrideExtIntInfo_t.h"
#include "HbkMaterialOverrideInfo_t.h"
#include "HbkMaterialOverrideComponent.generated.h"

class AActor;
class UTexture;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkMaterialOverrideComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkMaterailOverride_SaveType SaveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SaveExtInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LinkToGimmickBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DefaultActivateFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DefaultDeactivateFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResetToDefaultAfterPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EndBattleToDefaultFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkMaterialOverrideInfo_t> ActivateInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkMaterialOverrideInfo_t> DeactivateInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkMaterialOverrideExtIntInfo_t> ActivateExtIntInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkMaterialOverrideExtIntInfo_t> DeactivateExtIntInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkMaterialOverrideInfo_t> BeginBattleInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkMaterialOverrideInfo_t> EndBattleInfoArray;
    
public:
    UHbkMaterialOverrideComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnGimmickComponentDeactivateExtInt(AActor* Activator, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnGimmickComponentDeactivate(AActor* Activator);
    
    UFUNCTION(BlueprintCallable)
    void OnGimmickComponentActivateExtInt(AActor* Activator, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnGimmickComponentActivate(AActor* Activator);
    
    UFUNCTION(BlueprintCallable)
    void OnEndBattle();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginBattle();
    
    UFUNCTION(BlueprintCallable)
    void OnActivateMovieStart(UTexture* NewMediaTexture);
    
    UFUNCTION(BlueprintCallable)
    void OnActivateMovieEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnActivateExtIntMovieStart(UTexture* NewMediaTexture);
    
    UFUNCTION(BlueprintCallable)
    void OnActivateExtIntMovieEnd();
    
    UFUNCTION(BlueprintCallable)
    void CopyMaterialOverrideComp(AActor* pActor);
    
};

