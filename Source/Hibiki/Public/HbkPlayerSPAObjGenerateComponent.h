#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "HbkPlayerSpAtkGenerateObjectFolder.h"
#include "HbkPlayerSPAObjGenerateComponent.generated.h"

class AHbkPlayerSpecialAttackObjectBase;
class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkPlayerSPAObjGenerateComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GenerateObjectData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHbkPlayerSpAtkGenerateObjectFolder> GenerateObjectFolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AHbkPlayerSpecialAttackObjectBase*> ObjectListAll;
    
public:
    UHbkPlayerSPAObjGenerateComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UnregisterSpAtkObject();
    
    UFUNCTION(BlueprintCallable)
    void InitSpAtkObjGenerate();
    
public:
    UFUNCTION(BlueprintCallable)
    bool GenerateObject(FGameplayTag SpAtkTag, float PlayerPlayRate);
    
};

