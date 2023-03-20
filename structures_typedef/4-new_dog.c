#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * _strdup - duplicates string
 * @str: string
 * Return: Always 0 (Success)
 */

char *_strdup(char *str)
{
	char *p;
	int i, x;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
	}
	p = malloc(sizeof(char) * i + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (x = 0; x < i; x++)
		{
			p[x] = str[x];
		}
	}
	return (p);
}

/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: Always 0 (Success)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = NULL;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		return (NULL);
	}
	newdog->name = _strdup(name);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->age = age;
	newdog->owner = _strdup(owner);
	if (newdog->owner == NULL)
	{
		free (newdog->name);
		free (newdog);
		return (NULL);
	}
	return (newdog);
}

